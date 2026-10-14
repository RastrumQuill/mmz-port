// sub_08070FC4 at 0x08070FC4 (thumb)

undefined4 sub_08070FC4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar1 = DAT_0202ebbb & 0x20;
  if ((DAT_0202ebbb & 0x20) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    goto LAB_080710d0;
  }
  iVar5 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (iVar4 == 0) {
      if (iVar5 != 0) {
        *(char *)(iVar5 + 0xbe) = *(char *)(iVar5 + 0xbe) + -1;
        *(uint *)(iVar5 + 0x2c) = uVar1;
      }
      goto LAB_0807109a;
    }
    *(char *)(iVar4 + 0x10) = (char)uVar1;
    sub_080713C4(iVar4,1,*(undefined *)(iVar4 + 0xb4));
    if (*(char *)(param_1 + 0xb5) == '\x02') {
      *(undefined *)(iVar4 + 0xd) = 1;
      *(undefined4 *)(iVar4 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
    }
    if (iVar5 != 0) {
      *(char *)(iVar5 + 0xbe) = *(char *)(iVar5 + 0xbe) + -1;
      *(int *)(iVar5 + 0x2c) = iVar4;
    }
    *(int *)(iVar4 + 0x28) = iVar5;
  }
  else {
    if (*(int *)(iVar5 + 0x28) != 0) {
      pcVar3 = (char *)(*(int *)(iVar5 + 0x28) + 0xbe);
      *pcVar3 = *pcVar3 + -1;
    }
    if (*(byte *)(iVar5 + 0xc) < 2) {
      *(uint *)(iVar5 + 0x2c) = uVar1;
      sub_080713C4(iVar5,1,*(undefined *)(iVar5 + 0xb4));
    }
LAB_0807109a:
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  sub_080032EC(0x3f);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  uVar2 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_080710d0:
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

