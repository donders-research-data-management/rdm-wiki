# Accessing collection data using WebDAV client

The data content of a RDM collection consists of files and directories. To access the data content, one uses a HTTP-based file transfer protocol called [WebDAV](https://en.wikipedia.org/wiki/WebDAV).

There are existing client tools for the WebDAV protocol.  However, concerning the best compatibility and cross-platform support, we recommend researchers to use the [CyberDuck](https://cyberduck.io).

Attention: Although the native file browser of Windows (i.e. Explorer) and MacOSX (i.e. Finder) works with WebDAV protocol, they are __NOT__ compatible with the RDM WebDAV service.  Please don't use them to access data in the RDM system.

## CyberDuck installation

Warning: Due to a [bug](https://trac.cyberduck.io/ticket/9358) in Cyberduck versions 4.8.0-4.8.3, there will be an error when verifying the SSL certificate.  Please use either version 4.7.3 or a version >= 4.8.4.

For Windows and MacOSX systems, the CyberDuck installation is graphical and self-explanatory. Simply download the installer from [the software's website](https://cyberduck.io) and follow instructions step-by-step while executing the installer. You will need the administrator's right to install CyberDuck software on your computer.

For Linux users, CyberDuck is provided as a command-line tools called [duck.sh](https://duck.sh).  The installation instruction can be found [here](https://trac.cyberduck.io/wiki/help/en/howto/cli#Linux).

## CyberDuck setup

Note: This instruction convers only the graphical user interface of CyberDuck. For [duck.sh](https://duck.sh) user, please refer to [this general usage](https://trac.cyberduck.io/wiki/help/en/howto/cli#Usage).

1. Open the CyberDuck application, and create a new connection bookmark:

  ![](screenshots/cyberduck_new_bookmark.png)

2. Configure the connection with the following parameters:

  * __WebDAV (HTTP/SSL)__
  * Server: __webdav.data.donders.ru.nl__
  * Port: __443__
  * Username: __untick the `Anonymous Login` and set it to the _username_ of the [data-access account](data_access_account.md)__
  
  The configurations are saved to the bookmark on-the-fly.  Just close the configuration window when you are done with the configuration.

  ![](screenshots/cyberduck_webdav_config.png)

3. Click on the saved bookmark to make connection.  You will be asked for a login password.  Please fill in the _one-time password_ of your [data-access account](data_access_account.md) retrieved from the CMS portal. In the `Login` window, make sure you tick the option `Save password`.

  ![](screenshots/cyberduck_connect_via_bookmark.png)
  
  ![](screenshots/cyberduck_login_hotp.png)

4. Once you loggin to the WebDAV service, you will see a filesystem-like structure with four directories, each pertains to a centre (or organisational-unit in case of DCN) of the Donders Institute. You may click into a directory and consequently see sub-directories referring to the RDM collections belong to a centre/organisational-unit. Within the directory of a RDM collection, you will see the data content in terms of files and directories.

  ![](screenshots/cyberduck_file_browser.png)

5. As a viewer of the collection, you are only allowed to download data content (files/directories) from a collection.  As a contributor or manager, you are also allowed to upload and modify data via the WebDAV client. 

Note: If the client (i.e. the Cyberduck) is idle for two hours (e.g. no browsing or data transfer activities), you will be logged out automatically by the WebDAV server. In this case, you will have to login again with a fresh one-time password. 

## Alternative clients

The table below provides a list of tested WebDAV clients that work smoothly with the RDM WebDAV service.  You may use them as alternatives to the CyberDuck.

|   Platform    |     Software                                  |  GUI suppor   |
| ------------- | --------------------------------------------- | ------------- |
|   Liunx       | [Cadaver](http://www.webdav.org/cadaver/)     |      N        |
|   Liunx       | [Thunar](https://en.wikipedia.org/wiki/Thunar)|      Y        |
