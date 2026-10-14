// sub_080BFA18 at 0x080BFA18 (thumb)

undefined4 sub_080BFA18(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    sub_080C222C();
    *(undefined2 *)(param_1 + 4) = 0;
    if ((DAT_02022b64 & 0x40) != 0) {
      DAT_02004f30 = DAT_02004f30 & 0xf0ff | 0x100;
      sub_080BF0A4(param_1,0x600);
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  iVar2 = param_1 + 0x99c;
  sub_080033CC(iVar2);
  sub_08005564();
  DAT_0202287c = 0;
  sub_0800FA94(1);
  sub_0800DD7C(DAT_02023118,iVar2);
  sub_0800DD7C(DAT_02022e94,iVar2);
  sub_0800DD7C(DAT_02022e98,iVar2);
  sub_0800DD7C(DAT_02022e8c,iVar2);
  sub_0800DCB0(DAT_0202320c,iVar2);
  sub_08025B38(iVar2);
  sub_0800DCB0(DAT_02022f74,iVar2);
  sub_0800DCB0(DAT_0202300c,iVar2);
  sub_0800DD7C(DAT_020231fc,iVar2);
  sub_0800FB38(1);
  sub_080C2108(param_1);
  sub_080BC7BC();
  sVar1 = *(short *)(param_1 + 4) + 2;
  *(short *)(param_1 + 4) = sVar1;
  DAT_03001ba0 = (undefined)sVar1;
  DAT_03001ba1 = DAT_03001ba0;
  DAT_03001ba2 = DAT_03001ba0;
  if (sVar1 == 0x20) {
    *(undefined2 *)(param_1 + 0x1af0) = 0;
    if ((DAT_02022ae0 & 2) == 0) {
      sub_08001DFC();
    }
    sub_080BF0A4(param_1,0x300);
  }
  return in_lr;
}

