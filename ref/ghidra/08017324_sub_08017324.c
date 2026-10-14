// sub_08017324 at 0x08017324 (thumb)

undefined8 sub_08017324(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0xc) & 0xffff00) == 0x20600) || (4 < *(byte *)(param_1 + 0xd))) ||
     ((*(byte *)(param_1 + 0x17a) & 0x20) == 0)) {
    *(undefined2 *)(param_1 + 0x126) = 0;
    *(undefined *)(param_1 + 0x125) = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x128);
    if ((bVar2 & 1) == 0) {
      bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
      if ((bVar1 & 0x20) == 0) {
        *(byte *)(param_1 + 0x125) = bVar1 & 0x20;
      }
      else {
        uVar7 = *(byte *)(param_1 + 0x125) + 1;
        if (0xef < uVar7) {
          *(byte *)(param_1 + 0x128) = bVar2 | 1;
          *(undefined2 *)(param_1 + 0x126) = 0x1e1;
          uVar7 = 0;
          sub_08001EAC(0xd2);
        }
        *(byte *)(param_1 + 0x125) = (byte)uVar7;
      }
    }
    else {
      *(short *)(param_1 + 0x126) = *(short *)(param_1 + 0x126) + -1;
      *(undefined *)(param_1 + 0x125) = 0;
    }
    uVar7 = (uint)*(ushort *)(param_1 + 0x126);
    if (uVar7 != 0) {
      uVar3 = 0;
      puVar6 = &DAT_082a8002;
      if (0x5f < uVar7) {
        do {
          uVar7 = uVar7 - *puVar6;
          puVar6 = puVar6 + 1;
          uVar3 = uVar3 + 1;
          if (uVar7 < *puVar6) break;
        } while (uVar3 < 4);
      }
      iVar4 = sub_080C8CB0(uVar7,(&DAT_082a7ffc)[uVar3]);
      if (iVar4 == 1) {
        *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0x7f;
      }
      else {
        *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) | 0x80;
      }
      uVar5 = 1;
      goto LAB_08017470;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x128);
  if ((bVar2 & 1) != 0) {
    *(byte *)(param_1 + 0x128) = bVar2 & 0xfe;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  uVar5 = 0;
LAB_08017470:
  return CONCAT44(in_lr,uVar5);
}

