// sub_080CAB44 at 0x080CAB44 (thumb)

undefined4 sub_080CAB44(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(byte *)(param_1 + 0x11) < 6) {
      sub_080127E4(param_1,(&DAT_083490ec)[*(byte *)(param_1 + 0x11)]);
    }
    else {
      sub_080127E4(param_1,0x2d06);
    }
    sub_080128D4(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    DAT_0202d00c = 0;
    DAT_0202d010 = 0;
    DAT_0202d014 = 0x3c0000;
    DAT_0202d018 = 0x280000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || (cVar1 = sub_08022A9C(DAT_0202e130), cVar1 == '\0'))
  {
LAB_080cac34:
    iVar3 = (int)*(short *)(param_1 + 0xbe);
    if (iVar3 != -1) {
      sub_08003338(iVar3);
      *(short *)(param_1 + 0xbe) = -1;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0xc0) < *(byte *)(param_1 + 0x11)) && ((DAT_0202ec34 & 0x40) != 0)) {
      uVar2 = 0xfffffe00;
    }
    else {
      if ((*(byte *)(param_1 + 0xc1) <= *(byte *)(param_1 + 0x11)) || ((DAT_0202ec34 & 0x80) == 0))
      goto LAB_080cac34;
      uVar2 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080CA900(param_1);
  }
  return in_lr;
}

