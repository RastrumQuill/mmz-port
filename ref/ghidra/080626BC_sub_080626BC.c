// sub_080626BC at 0x080626BC (thumb)

undefined4 sub_080626BC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080489E4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar3 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar3;
  if (*(int *)(param_1 + 0x4c) < iVar3) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = 0xffffff80;
  }
  else {
    uVar2 = 0x80;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b0680,param_1 + 0x4c,6);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080627BC(param_1);
  return in_lr;
}

