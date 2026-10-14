// sub_08072B8C at 0x08072B8C (thumb)

undefined4 sub_08072B8C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,5);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b14d8,param_1 + 0x4c,0x10);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(iVar1 + 0xd);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08072954(param_1);
  return in_lr;
}

