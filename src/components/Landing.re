open Constants;
let string = ReasonReact.string;

let wrapper =
  Css.(
    style([
      display(`flex),
      flexDirection(`column),
      lineHeight(em(1.4)),
      maxWidth(pct(90.)),
      fontSize(em(1.2)),
      paddingTop(rem(2.)),
      margin(`auto),
      media(
        Media.large,
        [fontSize(em(1.4)), flexDirection(`row), padding(rem(4.))],
      ),
    ])
  );

let nextEventWrapper =
  Css.(
    style([width(pct(100.)), media(Media.large, [width(pct(35.))])])
  );

let component = ReasonReact.statelessComponent("Landing");
let make = _children => {
  ...component,
  render: _self =>
    <div className=wrapper>
      <div>
        <p>
          {string("Follow us on ")}
          <a href="https://twitter.com/reasonoslo"> {string("Twitter")} </a>
          {string(", and ")}
          {string("join the conversation at ")}
          <a href="https://spectrum.chat/reason-oslo">
            {string("spectrum.chat/reason-oslo")}
          </a>
          {string(".")}
        </p>
        <p>
          <Link href="/resources"> {string("Good reason resources")} </Link>
        </p>
      </div>
      <div className=nextEventWrapper> <NextEvent /> </div>
    </div>,
};
