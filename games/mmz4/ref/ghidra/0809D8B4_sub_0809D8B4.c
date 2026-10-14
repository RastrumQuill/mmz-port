// sub_0809D8B4 at 0x0809D8B4 (thumb)

undefined4 sub_0809D8B4(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar2 = *(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54);
  if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
    if (*(char *)(param_1 + 0xbe) != '\x01') {
      sub_080DEEF8(param_1 + 0x54,1,0xff,*(byte *)(param_1 + 10) >> 4 & 1,bVar2);
      goto LAB_0809d92e;
    }
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = 2;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = 0;
  }
  sub_080DEEF8(param_1 + 0x54,uVar3,0xff,bVar1 >> 4 & 1,bVar2);
LAB_0809d92e:
  sub_0802AB70(4,0x31,param_1 + 0x54);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

