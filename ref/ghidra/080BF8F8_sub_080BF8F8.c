// sub_080BF8F8 at 0x080BF8F8 (thumb)

undefined4 sub_080BF8F8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(undefined *)(param_1 + 3) = 1;
  }
  iVar1 = *(ushort *)(param_1 + 4) - 2;
  *(short *)(param_1 + 4) = (short)iVar1;
  DAT_03001ba0 = (undefined)iVar1;
  DAT_03001ba1 = DAT_03001ba0;
  DAT_03001ba2 = DAT_03001ba0;
  if (iVar1 * 0x10000 >> 0x10 == 0) {
    sub_080C2174(param_1);
    DAT_02004f90 = (undefined2)((uint)(iVar1 * 0x10000) >> 0x10);
    DAT_02004f30 = DAT_02004f30 & 0xc1ff;
    DAT_030017a0 = DAT_02004f90;
    sub_080BF0A4(param_1,1);
  }
  else {
    iVar1 = param_1 + 0x99c;
    sub_080033CC(iVar1);
    sub_08005564();
    DAT_0202287c = 0;
    sub_0800FA94(1);
    sub_0800DD7C(DAT_02023118,iVar1);
    sub_0800DD7C(DAT_02022e94,iVar1);
    sub_0800DD7C(DAT_02022e98,iVar1);
    sub_0800DD7C(DAT_02022e8c,iVar1);
    sub_0800DCB0(DAT_0202320c,iVar1);
    sub_08025B38(iVar1);
    sub_0800DCB0(DAT_02022f74,iVar1);
    sub_0800DCB0(DAT_0202300c,iVar1);
    sub_0800DD7C(DAT_020231fc,iVar1);
    sub_0800FB38(1);
    sub_080C2108(param_1);
    sub_080BC7BC();
  }
  return in_lr;
}

