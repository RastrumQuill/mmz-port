// sub_080F8984 at 0x080F8984 (thumb)

undefined4 sub_080F8984(int param_1)

{
  undefined uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  local_20 = *(undefined4 *)(param_1 + 0x58);
  local_24 = *(undefined4 *)(param_1 + 0x54);
  uVar1 = sub_080F811C(param_1 + 0x54);
  cVar2 = sub_08128A9C(uVar1,3);
  if (cVar2 == '\0') {
    for (uVar3 = 1; uVar3 < 0x1e0; uVar3 = uVar3 + 1) {
      uVar1 = sub_080F8910(&local_24);
      cVar2 = sub_08128A9C(uVar1,3);
      if (cVar2 != '\0') break;
    }
  }
  uVar7 = 0;
  bVar5 = 0;
  do {
    bVar5 = bVar5 + 1;
    for (uVar6 = 0; uVar6 < 0x1e0; uVar6 = uVar6 + 1 & 0xffff) {
      uVar1 = sub_080F8910(&local_24);
      cVar2 = sub_08128A9C(uVar1,3);
      if (cVar2 != '\0') break;
    }
    uVar7 = uVar7 + uVar6 & 0xffff;
  } while (bVar5 < 2);
  uVar3 = DAT_02000c80 & 0x7f;
  if (uVar3 == 10) {
    iVar4 = 0x2d030;
  }
  else if (uVar3 == 0xd) {
    iVar4 = 0x2d02c;
  }
  else {
    if (uVar3 != 0xf) {
      uVar7 = 0;
      goto LAB_080f8a66;
    }
    iVar4 = 0x2d034;
  }
  uVar7 = sub_08128A9C(*(undefined4 *)(&DAT_02000ab0 + iVar4),(uVar7 + 2) * 0x10000 >> 0xb);
LAB_080f8a66:
  uVar6 = 0;
  if (uVar7 != 0) {
    do {
      local_24 = *(undefined4 *)(param_1 + 0x54);
      local_20 = *(undefined4 *)(param_1 + 0x58);
      iVar4 = param_1 + 0x54;
      if (uVar6 + 0x10 < uVar7) {
        uVar1 = sub_080F811C(iVar4);
        cVar2 = sub_08128A9C(uVar1,3);
        if (cVar2 != '\0') goto LAB_080f8ab4;
        uVar1 = sub_080F8910(&local_24);
        cVar2 = sub_08128A9C(uVar1,3);
        if (cVar2 != '\0') goto LAB_080f8ab4;
        sub_0812888C(iVar4,param_1 + 0xb9,0x10,0x80f7f79);
        uVar6 = uVar6 + 0xf & 0xffff;
      }
      else {
LAB_080f8ab4:
        sub_0812888C(iVar4,param_1 + 0xb9,1,0x80f7f79);
      }
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < uVar7);
  }
  return in_lr;
}

