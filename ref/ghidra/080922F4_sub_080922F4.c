// sub_080922F4 at 0x080922F4 (thumb)

undefined4 sub_080922F4(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  short asStack_4c [6];
  short asStack_40 [6];
  int local_34 [4];
  undefined4 uStack_24;
  
  sub_080C8D70(asStack_4c,&DAT_080c9450,10);
  sub_080C8D70(asStack_40,&DAT_080c945a,10);
  local_34[0] = 0x1000;
  local_34[1] = 0x1800;
  local_34[2] = 0x1800;
  local_34[3] = 0x2800;
  uStack_24 = 0x1000;
  iVar3 = *(int *)(param_1 + 0x20);
  sub_0800DEB4(param_1,iVar3);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x11) + '\x01');
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar2 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(int *)(param_1 + 0x58) = (int)asStack_40[*(byte *)(param_1 + 0x11)];
  sVar1 = asStack_4c[*(byte *)(param_1 + 0x11)];
  *(int *)(param_1 + 0x54) = (int)sVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    *(int *)(param_1 + 0x54) = -(int)sVar1;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + local_34[*(byte *)(param_1 + 0x11)];
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08092218(param_1);
  return in_lr;
}

