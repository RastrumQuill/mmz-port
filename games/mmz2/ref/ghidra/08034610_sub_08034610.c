// sub_08034610 at 0x08034610 (thumb)

undefined8 sub_08034610(int param_1)

{
  undefined uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined uVar8;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0xd);
  puVar4 = (undefined *)(param_1 + 0x17b);
  uVar1 = *puVar4;
  pbVar6 = (byte *)(param_1 + 0x17c);
  bVar3 = *pbVar6;
  puVar7 = (undefined *)(param_1 + 0x17d);
  uVar8 = *puVar7;
  if (bVar3 < 2) {
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 3;
    *puVar4 = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 1;
    *pbVar6 = *(byte *)(param_1 + 0x178);
    *(byte *)(param_1 + 0x178) = 5;
    *puVar7 = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0801E9FC(param_1,(&DAT_08335cd4)[uVar2]);
  }
  else {
    if (bVar3 != 4) {
      bVar3 = 4;
      uVar8 = 0;
    }
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 3;
    *puVar4 = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 1;
    *pbVar6 = *(byte *)(param_1 + 0x178);
    *(byte *)(param_1 + 0x178) = bVar3;
    *puVar7 = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = uVar8;
    uVar8 = (&DAT_08335cd0)[uVar2];
    if (*(char *)(param_1 + 0x17f) == (&DAT_08335cd0)[*(byte *)(param_1 + 0x174)]) {
      uVar2 = (uint)*(char *)(param_1 + 0x71);
      iVar5 = (int)*(char *)(param_1 + 0x72);
      if (2 < uVar2) {
        uVar2 = 2;
        iVar5 = 1;
      }
      sub_0801EA38(param_1,uVar8,uVar2,iVar5);
    }
    else {
      sub_080345CC(param_1,1,uVar1,uVar2,(uint)*(byte *)(param_1 + 0x174),uVar8,
                   *(char *)(param_1 + 0x17f));
      sub_0801E9FC(param_1,uVar8);
    }
  }
  return CONCAT44(in_lr,3);
}

