// sub_08104280 at 0x08104280 (thumb)

undefined4 sub_08104280(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xc0);
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  if ((*(uint *)(iVar6 + 0xdf0) & 1 << uVar5) == 0) {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      if ((*(int *)(iVar6 + 0xdf4) == 0) ||
         (iVar2 = sub_08128A9C(*(int *)(iVar6 + 0xdf4),10), iVar2 != 0)) {
        sub_080BC088(param_1 + 0x54,uVar5 << 8,iVar6 + 0xdf0);
      }
      else {
        sub_080BC088(param_1 + 0x54,uVar5 << 8 | 1,iVar6 + 0xdf0);
      }
      iVar6 = *(int *)(param_1 + 0xc0);
      *(int *)(iVar6 + 0xdf4) = *(int *)(iVar6 + 0xdf4) + 1;
      iVar6 = *(int *)(param_1 + 0xc0);
      *(uint *)(iVar6 + 0xdf0) = *(uint *)(iVar6 + 0xdf0) | 1 << *(sbyte *)(param_1 + 0x10);
      *(char *)(param_1 + 0xb4) = '\x01';
      *(undefined *)(param_1 + 0xb5) = 0;
    }
    else if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0xb5) == '\0')) {
      *(undefined *)(param_1 + 0x12) = 0x14;
      *(char *)(param_1 + 0xb5) = '\x01';
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0xe04) = 1;
    }
  }
  piVar4 = (int *)(param_1 + 0xc0);
  if ((*(uint *)(*piVar4 + 0xdf0) & 0xff) == 0) {
    *(char *)(param_1 + 0xb4) = (char)*(uint *)(*piVar4 + 0xdf0);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(param_1 + 0xb6) != '\0') {
      *(char *)(param_1 + 0xb6) = '\0';
    }
  }
  else {
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 1) != 0) {
      pcVar3 = (char *)(param_1 + 0xb6);
      if (*pcVar3 != '\0') {
        if (*pcVar3 == '\x01') {
          piVar4 = (int *)(*(int *)(*piVar4 + 0xdcc) + 0x1bc);
          iVar6 = *piVar4;
          iVar2 = 0x200;
        }
        else {
          piVar4 = (int *)(*(int *)(*piVar4 + 0xdcc) + 0x1bc);
          iVar6 = *piVar4;
          iVar2 = -0x200;
        }
        *piVar4 = iVar6 + iVar2;
        *pcVar3 = (*pcVar3 - 1U ^ 1) + 1;
      }
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

