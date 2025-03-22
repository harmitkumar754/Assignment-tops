export default function Footer2()
{
    return(
        <>
       <footer className="bg-black text-light py-3 ">
  <div className="container">
    <div className="row">
      <div className="col-md-6 text-left text-md-left">
        <p>© Copyright MyWebsite. All Rights Reserved</p>
        <p>Designed by HD <span className="text-success">BootstrapMade</span></p>
      </div>
      <div className="col-md-6  text-end">
        <ul className="list-inline me-5 mt-3">
          <li className="list-inline-item  p-2 bg-dark">
            <a href="facebook.com" className="text-light">
              <i className="fab fa-twitter text-success fs-4" />
            </a>
          </li>
          <li className="list-inline-item p-2 bg-dark">
            <a href="ok" className="text-light">
              <i className="fab fa-facebook text-success fs-4" />
            </a>
          </li>
          <li className="list-inline-item p-2 bg-dark">
            <a href="ok" className="text-light">
              <i className="fab fa-instagram text-success fs-4" />
            </a>
          </li>
          <li className="list-inline-item p-2 bg-dark">
            <a href="ok" className="text-light">
              <i className="fab fa-linkedin text-success fs-4" />
            </a>
          </li>
        </ul>
      </div>
    </div>
  </div>
</footer>
        

        </>
    )
}