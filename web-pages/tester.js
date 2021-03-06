import _defineProperty from "@babel/runtime/helpers/defineProperty";
export default class AnalyticsEvent {
  constructor(props) {
    _defineProperty(this, "clone", () => {
      // just a shallow clone, don't change sub refs unless you want to
      // affect the original's too
      const payload = { ...this.payload
      };
      return new AnalyticsEvent({
        payload
      });
    });

    this.payload = props.payload;
  }

  update(updater) {
    if (typeof updater === 'function') {
      this.payload = updater(this.payload);
    }

    if (typeof updater === 'object') {
      this.payload = { ...this.payload,
        ...updater
      };
    }

    return this;
  }

}