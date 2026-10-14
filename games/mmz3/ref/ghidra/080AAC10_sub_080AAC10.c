// sub_080AAC10 at 0x080AAC10 (thumb)

undefined4 sub_080AAC10(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x6201);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368c24,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x25) = 9;
  *(undefined *)(param_1 + 0x12) = 0x30;
  pcVar2 = (char *)(iVar1 + 0xc6);
  *pcVar2 = *pcVar2 + '\x01';
  sub_080AA91C(param_1);
  return in_lr;
}

