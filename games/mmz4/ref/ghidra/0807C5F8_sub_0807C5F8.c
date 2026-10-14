// sub_0807C5F8 at 0x0807C5F8 (thumb)

undefined4 sub_0807C5F8(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined local_30 [4];
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_4;
  
  sub_08128BBC(local_30,0,4);
  uStack_4 = in_lr;
  if (*(char *)(param_1 + 0xf) == '\0') {
    piVar6 = (int *)(param_1 + 0xb4);
    bVar1 = *piVar6 + 0x7800 < *(int *)(DAT_0202dbf0 + 0x54);
    local_2c = *piVar6 + ((uint)bVar1 * 2 + -1) * -0xa800 + 0x7800;
    local_28 = *(undefined4 *)(param_1 + 0x58);
    local_20 = local_28;
    for (uVar7 = 0; (int)uVar7 < 4; uVar7 = uVar7 + 1) {
      local_24 = *piVar6 + (&DAT_0885a328)[uVar7] + 0x7800;
      iVar5 = sub_080B09A0(param_1,&local_2c,&local_24,uVar7 & 0xff);
      if (iVar5 == 0) break;
      local_30[uVar7] = 1;
    }
    if (uVar7 != 4) {
      *(undefined *)(param_1 + 0xd4) = 0xf;
      *(int *)(param_1 + 200) = *piVar6 + 0x7800;
      *(bool *)(param_1 + 0xbe) = *piVar6 + 0x7800 < *(int *)(DAT_0202dbf0 + 0x54);
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      sub_08128884(param_1,0x807e5fd);
      return uStack_4;
    }
    DAT_02000a40 = 0x3f10;
    sub_0807E7E0(param_1,0x14);
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    uVar3 = sub_0807EA50(local_30,4);
    *(undefined *)(param_1 + 0xd5) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  DAT_02000a42 = 8U - (*(short *)((int)&DAT_08128c10 +
                                 ((uint)*(byte *)(param_1 + 0x12) * 0x8000000 + 0xc0000000 >> 0x17))
                      >> 5) & 0x1f | 0x1000;
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return uStack_4;
}

