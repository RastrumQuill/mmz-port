// sub_080F682C at 0x080F682C (thumb)

undefined4 sub_080F682C(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  pcVar1 = (char *)(param_1 + 0xb5);
  *pcVar1 = '\0';
  iVar4 = 0x1200;
  iVar2 = *(int *)(param_1 + 0x28);
  for (uVar3 = 0; (int)uVar3 < 2; uVar3 = uVar3 + 1) {
    local_24 = *(int *)(iVar2 + 0x54) + iVar4;
    local_20 = *(int *)(iVar2 + 0x58) + -0x3200;
    local_1c = iVar2;
    iVar2 = sub_080F67A8(param_1,&local_24,uVar3 & 0xff);
    if (iVar2 == 0) break;
    *pcVar1 = *pcVar1 + '\x01';
    iVar4 = iVar4 + -0x2400;
    iVar2 = local_1c;
  }
  sub_080F6940(param_1);
  return in_lr;
}

