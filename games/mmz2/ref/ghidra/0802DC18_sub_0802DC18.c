// sub_0802DC18 at 0x0802DC18 (thumb)

undefined4 sub_0802DC18(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 in_lr;
  
  uVar2 = sub_08032968();
  puVar6 = (undefined4 *)(param_1 + 0xd8);
  sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,puVar6,*puVar6,*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,uVar2,1,1,0,1);
  iVar10 = *(int *)(param_1 + 200);
  bVar1 = sub_08022C40(param_1,*puVar6);
  *(byte *)(param_1 + 0x18a) = bVar1;
  if (bVar1 < 100) {
    iVar3 = sub_080EF150((uint)bVar1 << 7,100);
    iVar3 = 0x400 - iVar3;
  }
  else {
    iVar3 = 0x380;
  }
  if (iVar3 < iVar10) {
    iVar10 = iVar3;
  }
  *(int *)(param_1 + 0x60) = iVar10;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar10;
  uVar4 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                       *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  if ((uVar4 & 0xf) != 0) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    puVar7 = (undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x17a) = *puVar7;
    *puVar7 = 0;
    puVar9 = (undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x17b) = *puVar9;
    *puVar9 = 0;
    puVar5 = (undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x17c) = *puVar5;
    *puVar5 = 0;
    puVar8 = (undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x17d) = *puVar8;
    *puVar8 = 0;
    *(undefined *)(param_1 + 0x17a) = *puVar7;
    *puVar7 = 3;
    *(undefined *)(param_1 + 0x17b) = *puVar9;
    *puVar9 = 1;
    *(undefined *)(param_1 + 0x17c) = *puVar5;
    *puVar5 = 3;
    *(undefined *)(param_1 + 0x17d) = *puVar8;
    *puVar8 = 3;
    sub_0801E9FC(param_1,7);
  }
  return in_lr;
}

