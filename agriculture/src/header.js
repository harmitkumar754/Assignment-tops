export default function Header() 
{
    return(
        <div className="header">
        <nav className="navbar navbar-expand-lg bg-body-1 py-4 navbar-light bg-light fs-5">
  <div className="container">
    <a className="navbar-brand" href="/home">
      <img src='https://bootstrapmade.com/content/demo/AgriCulture/assets/img/logo.png' alt="logo" width="100" height="35" className="d-inline-block align-text-top" />
    </a>
    <button
      className="navbar-toggler"
      type="button"
      data-bs-toggle="collapse"
      data-bs-target="#navbarSupportedContent"
      aria-controls="navbarSupportedContent"
      aria-expanded="false"
      aria-label="Toggle navigation"
    >
      <span className="navbar-toggler-icon" />
    </button>
    <div className="collapse navbar-collapse" id="navbarSupportedContent">
      <ul className="navbar-nav ms-auto mb-2 mb-lg-0">
        <li className="nav-item">
          <a className="nav-link active" aria-current="page" href="Main.js">
            Home
          </a>
        </li>
        <li className="nav-item">
          <a className="nav-link" href="/m_aboutuspage.js">
            About Us
          </a>
        </li>
        <li className="nav-item">
          <a className="nav-link" href="/ourservice">
            Our Service
          </a>
        </li>
        <li className="nav-item">
          <a className="nav-link" href="/testimonials">
            Testimonials
          </a>
        </li>
        <li className="nav-item">
          <a className="nav-link" href="blog">
            Blog
          </a>
        </li>
        <li className="nav-item dropdown">
          <a
            className="nav-link dropdown-toggle"
            href="/dropdown"
            role="button"
            data-bs-toggle="dropdown"
            aria-expanded="false"
          >
            Dropdown
          </a>
          <ul className="dropdown-menu">
            <li>
              <a className="dropdown-item" href="/contact">
                Contact
              </a>
            </li>
            <li>
              <a className="dropdown-item" href="/another">
                Another action
              </a>
            </li>
            <li>
              <hr className="dropdown-divider" />
            </li>
            <li>
              <a className="dropdown-item" href="/something">
                Something else here
              </a>
            </li>
          </ul>
        </li>
        <li className="nav-item">
          <a className="nav-link" href="/contact">
            contact
          </a>
        </li>
      </ul>
     
    </div>
  </div>
</nav>
        </div>
    )

    
}