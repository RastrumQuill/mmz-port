// sub_0805026C at 0x0805026C (thumb)

undefined4 sub_0805026C(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar2 - *(int *)(param_1 + 0x50) < 0xa40) {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  iVar2 = (param_2 & 0xff) * -0x14 + 10;
  cVar1 = sub_080065AC(*(int *)(param_1 + 0x4c) + iVar2 * 0x100,*(int *)(param_1 + 0x50) + -0xa00);
  if (cVar1 == '\x01') {
    if ((param_2 & 0xff) == 0) {
      iVar4 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    else {
      iVar4 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    *(int *)(param_1 + 0x4c) = iVar4 + iVar2 * -0x100;
  }
  return in_lr;
}

