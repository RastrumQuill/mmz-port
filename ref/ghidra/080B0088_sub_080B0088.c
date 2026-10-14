// sub_080B0088 at 0x080B0088 (thumb)

undefined4 sub_080B0088(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&DAT_082b6a34,param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x18;
  *(undefined **)(param_1 + 0x28) = &DAT_082b6a6c;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x4c);
  while (((cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
          cVar1 != '\0' &&
          (cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + -0x1f00,*(undefined4 *)(param_1 + 0x50)),
          cVar1 != '\0')) &&
         (cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0x1f00,*(undefined4 *)(param_1 + 0x50)),
         cVar1 != '\0'))) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2000;
  }
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  piVar5 = (int *)(param_1 + 0xc0);
  piVar4 = (int *)(param_1 + 0xbc);
  *piVar4 = iVar2;
  *piVar5 = iVar2;
  iVar2 = sub_08008360(*(int *)(param_1 + 0x4c) + -0x1f00,*(undefined4 *)(param_1 + 0x50));
  if (*piVar5 < iVar2) {
    *piVar5 = iVar2;
  }
  if (iVar2 < *piVar4) {
    *piVar4 = iVar2;
  }
  iVar2 = sub_08008360(*(int *)(param_1 + 0x4c) + 0x1f00,*(undefined4 *)(param_1 + 0x50));
  if (*piVar5 < iVar2) {
    *piVar5 = iVar2;
  }
  if (iVar2 < *piVar4) {
    *piVar4 = iVar2;
  }
  iVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*piVar4);
  piVar3 = (int *)(param_1 + 0xc4);
  *piVar3 = iVar2;
  iVar2 = sub_0800869C(*(int *)(param_1 + 0x4c) + 0x1f00,*piVar4);
  if (iVar2 < *piVar3) {
    *piVar3 = iVar2;
  }
  iVar2 = sub_0800869C(*(int *)(param_1 + 0x4c) + -0x1f00,*piVar4);
  if (iVar2 < *piVar3) {
    *piVar3 = iVar2;
  }
  *(int *)(param_1 + 0x50) = *piVar5 + -0x14000;
  sub_0809C930(param_1,0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080B01F0(param_1);
  return in_lr;
}

