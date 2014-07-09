/*	$NetBSD: pcap-sita.h,v 1.1.1.2 2013/04/06 15:57:49 christos Exp $	*/

/*
 * pcap-sita.h: Packet capture interface for SITA WAN devices
 *
 * Authors: Fulko Hew (fulko.hew@sita.aero) (+1 905 6815570);
 *
 * @(#) $Header: /tcpdump/master/libpcap/pcap-sita.h
 */

extern int acn_parse_hosts_file(char *errbuf);
extern int acn_findalldevs(char *errbuf);
