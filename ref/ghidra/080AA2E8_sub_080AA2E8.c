// sub_080AA2E8 at 0x080AA2E8 (thumb)

undefined4 sub_080AA2E8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  char acStack_28 [12];
  char acStack_1c [12];
  
  sub_080C8D70(acStack_28,&DAT_080c9529,10);
  sub_080C8D70(acStack_1c,&DAT_080c9529,10);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,*(undefined2 *)(param_1 + 0xc4));
    *(undefined *)(param_1 + 0xe) = 0;
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    cVar2 = acStack_1c[*(byte *)(param_1 + 0x10)];
    *(char *)(param_1 + 0x44) = cVar2;
    if (cVar2 == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  sub_0809C980(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    iVar7 = 0x800;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0x180;
    iVar7 = -0x800;
  }
  iVar6 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar6;
  if (acStack_28[*(byte *)(param_1 + 0x10)] == '\0') {
    cVar2 = sub_080079CC(iVar6 + iVar7,*(int *)(param_1 + 0x50) + -0x1800);
    if (cVar2 != -0x71) goto LAB_080aa3d0;
    uVar3 = 2;
  }
  else {
    cVar2 = sub_080079CC(iVar6 + iVar7,*(int *)(param_1 + 0x50) + 0x800);
    if (cVar2 != -0x72) goto LAB_080aa3d0;
    uVar3 = 4;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 1;
LAB_080aa3d0:
  uVar5 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (uVar5 < 0x1001) {
    cVar2 = sub_080079CC(*(int *)(param_1 + 0x4c) - iVar7,*(undefined4 *)(param_1 + 0x50));
    if (cVar2 == '\x01') {
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar1;
      if (bVar1 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

