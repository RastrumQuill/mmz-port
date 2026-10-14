// sub_080A0FC0 at 0x080A0FC0 (thumb)

undefined4 sub_080A0FC0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  cVar1 = *(char *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(uint *)(param_1 + 0x4c) = (*(uint *)(param_1 + 0x4c) & 0xfffff000) + 0x800;
  *(uint *)(param_1 + 0x50) = (*(uint *)(param_1 + 0x50) & 0xfffff000) + 0x800;
  iVar2 = sub_080064AC();
  if (iVar2 + -0xa0 < 0xb) {
    uVar3 = 0xffffff00;
    if (cVar1 != '\0') {
      uVar3 = 0x100;
    }
    if (((&DAT_082b5894)[iVar2] & 0xc) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      goto LAB_080a103a;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
LAB_080a103a:
  sub_0809C6C4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0809C930(param_1,1);
  sub_080A105C(param_1);
  return in_lr;
}

