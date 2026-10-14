// sub_080C2CE4 at 0x080C2CE4 (thumb)

undefined4 sub_080C2CE4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(short *)(param_1 + 6) + -1;
  *(short *)(param_1 + 6) = (short)iVar2;
  DAT_03001ba0 = (char)iVar2 * '\x02';
  DAT_03001ba1 = DAT_03001ba0;
  DAT_03001ba2 = DAT_03001ba0;
  if (iVar2 == 0) {
    sub_080BF0A4(param_1,0x500);
    sub_0801D710(&DAT_0202b5a0,*(undefined *)(param_1 + 0x9f8),*(undefined *)(param_1 + 0x9fa));
    sub_0801D710(&DAT_0202b5a0,*(undefined *)(param_1 + 0x9f9),*(undefined *)(param_1 + 0x9fa));
    sub_080C3B7C(param_1 + 0xa90);
    bVar1 = sub_0801C4FC(&DAT_0202b5a0);
    if (1 < bVar1) {
      sub_0801C610(&DAT_0202b5a0);
    }
  }
  else {
    param_1 = param_1 + 0x9b4;
    sub_080033CC(param_1);
    sub_0800DCB0(DAT_02023210,param_1);
    sub_0800338C(param_1);
  }
  return in_lr;
}

