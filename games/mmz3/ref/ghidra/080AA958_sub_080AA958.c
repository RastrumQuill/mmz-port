// sub_080AA958 at 0x080AA958 (thumb)

undefined4 sub_080AA958(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x6208);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368bf4,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x1000;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar4 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(byte *)(param_1 + 0x11) < 0xc1) {
      if ((int)((uint)*(byte *)(param_1 + 0x11) * 0x1000000) < 0) goto LAB_080aaa46;
      goto LAB_080aaa42;
    }
    uVar2 = 0xc0;
  }
  else if (*(byte *)(param_1 + 0x11) < 0x81) {
    if (0x4f < *(byte *)(param_1 + 0x11)) goto LAB_080aaa46;
    uVar2 = 0x50;
  }
  else {
LAB_080aaa42:
    uVar2 = 0x80;
  }
  *(undefined *)(param_1 + 0x11) = uVar2;
LAB_080aaa46:
  *(int *)(param_1 + 0x5c) = (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x11)] * 5;
  *(int *)(param_1 + 0x60) =
       *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x11) + 0xc0) * 0x1000000 >> 0x17)) * 5
  ;
  sub_080AA91C(param_1);
  return in_lr;
}

