// sub_0803442C at 0x0803442C (thumb)

undefined8 sub_0803442C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0xd);
  pbVar6 = (byte *)(param_1 + 0x17b);
  bVar1 = *pbVar6;
  pcVar8 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar8;
  puVar9 = (undefined *)(param_1 + 0x17d);
  uVar4 = *puVar9;
  if (uVar3 == 4) {
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 3;
    *pbVar6 = *(byte *)(param_1 + 0x177);
    *(byte *)(param_1 + 0x177) = bVar1;
    *pcVar8 = *(char *)(param_1 + 0x178);
    *(char *)(param_1 + 0x178) = cVar2;
    *puVar9 = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = uVar4;
    uVar3 = 1;
    goto LAB_080345be;
  }
  if (cVar2 == '\x05') {
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 3;
    *pbVar6 = *(byte *)(param_1 + 0x177);
    *(byte *)(param_1 + 0x177) = 1;
    *pcVar8 = *(char *)(param_1 + 0x178);
    *(char *)(param_1 + 0x178) = '\x05';
    *puVar9 = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = uVar4;
    uVar4 = (&DAT_08335cd4)[uVar3];
    uVar5 = (uint)*(char *)(param_1 + 0x71);
    iVar7 = (int)*(char *)(param_1 + 0x72);
    goto LAB_080345a6;
  }
  if (*(int *)((uint)bVar1 * 4 + *(int *)(&DAT_08333d24 + uVar3 * 4)) == 0) {
    uVar3 = sub_08034610(param_1);
    uVar3 = uVar3 & 0xff;
    goto LAB_080345be;
  }
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 3;
  *pbVar6 = *(byte *)(param_1 + 0x177);
  *(byte *)(param_1 + 0x177) = bVar1;
  *pcVar8 = *(char *)(param_1 + 0x178);
  *(char *)(param_1 + 0x178) = cVar2;
  *puVar9 = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = uVar4;
  uVar5 = (uint)*(char *)(param_1 + 0x71);
  iVar7 = (int)*(char *)(param_1 + 0x72);
  if (*(char *)(param_1 + 0x17f) == (&DAT_08335cd0)[*(byte *)(param_1 + 0x174)]) {
    uVar4 = (&DAT_08335cd0)[uVar3];
    if (2 < uVar5) {
      uVar5 = 2;
LAB_080345a4:
      iVar7 = 1;
    }
  }
  else {
    uVar4 = *(undefined *)(*(int *)(&DAT_08335cc0 + uVar3 * 4) + (uint)bVar1);
    if (3 < uVar5) {
      uVar5 = 3;
      goto LAB_080345a4;
    }
  }
LAB_080345a6:
  sub_0801EA38(param_1,uVar4,uVar5,iVar7);
  uVar3 = 3;
LAB_080345be:
  return CONCAT44(in_lr,uVar3);
}

