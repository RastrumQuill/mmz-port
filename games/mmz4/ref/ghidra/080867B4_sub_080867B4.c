// sub_080867B4 at 0x080867B4 (thumb)

undefined4 sub_080867B4(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  cVar1 = *(char *)(iVar6 + 9);
  if (*(char *)(iVar5 + 0xd) == '\x04') {
    return in_lr;
  }
  if (1 < *(byte *)(iVar5 + 0xc)) {
    return in_lr;
  }
  if ((((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(char *)(iVar6 + 8) == '\0')) && (cVar1 == '\0'))
  {
    *(undefined *)(iVar5 + 0xbc) = 1;
  }
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    return in_lr;
  }
  uVar4 = (uint)(*(int *)(iVar5 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) << 7;
  cVar2 = *(char *)(iVar6 + 8);
  if (cVar2 == '\x04') {
    if (cVar1 != '\0') {
      *(undefined *)(iVar5 + 0xb7) = 1;
      return in_lr;
    }
    iVar3 = *(int *)(iVar6 + 0x5c);
    iVar6 = *(int *)(iVar6 + 0x60);
    if ((iVar3 != 0) || (iVar6 != 0)) {
LAB_08086856:
      uVar4 = sub_0810CCF0(iVar3,iVar6);
      uVar4 = uVar4 & 0xff;
    }
    *(int *)(iVar5 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + ((uVar4 + 0x40) * 0x1000000 >> 0x17)) << 2;
    *(int *)(iVar5 + 0x60) = (int)(short)(&DAT_08128c10)[uVar4] << 2;
  }
  else {
    if (cVar2 < '\x05') {
      if (cVar2 == '\x01') {
LAB_0808682c:
        iVar3 = *(int *)(iVar5 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
        iVar6 = *(int *)(iVar5 + 0x58) - (*(int *)(DAT_0202dbf0 + 0x58) + -0x2400);
        goto LAB_08086856;
      }
    }
    else if (cVar2 == '\b') goto LAB_0808682c;
    *(undefined *)(iVar5 + 0xb7) = 1;
  }
  return in_lr;
}

