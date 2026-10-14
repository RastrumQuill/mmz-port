// sub_080AB34C at 0x080AB34C (thumb)

undefined4 sub_080AB34C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)*(undefined4 *)(param_1 + 0x5c);
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0x18);
  if (cVar2 == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      local_1c = *(int *)(param_1 + 0x54);
      iVar3 = -0x1000;
    }
    else {
      local_1c = *(int *)(param_1 + 0x54);
      iVar3 = 0x1000;
    }
    local_1c = local_1c + iVar3;
    iVar3 = sub_080FE460(*(undefined *)(param_1 + 0x12),0x18);
    if (*(int *)(&DAT_08368d44 +
                ((uint)(iVar3 << 0x18) >> 0x16) + (uint)*(byte *)(param_1 + 0xc2) * 0x28) != -1) {
      local_18 = *(int *)(param_1 + 0x58) +
                 *(int *)(&DAT_08368d44 +
                         ((uint)(iVar3 << 0x18) >> 0x16) + (uint)*(byte *)(param_1 + 0xc2) * 0x28);
      sub_080AA6FC(&local_1c,((uint)bVar1 << 0x18) >> 0x1c & 1,param_1);
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (((cVar2 == -1) || (1 < *(byte *)(iVar4 + 0xc))) || (*(char *)(iVar4 + 0xd) == '\x13')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    sub_080AA934(param_1);
  }
  return in_lr;
}

