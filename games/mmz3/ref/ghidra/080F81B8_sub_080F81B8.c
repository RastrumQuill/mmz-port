// sub_080F81B8 at 0x080F81B8 (thumb)

undefined4 sub_080F81B8(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined *)(param_1 + 0xdd8) = 1;
    iVar4 = sub_080E5F40(param_1,0,0);
    *(int *)(param_1 + 0xdd0) = iVar4;
    iVar5 = sub_080FE4D8(*(undefined *)(param_1 + 0xdd6),5);
    *(ushort *)(iVar4 + 0x74) = (ushort)((uint)(iVar5 << 0x18) >> 0x14) + 0x18;
    iVar4 = *(int *)(param_1 + 0xdd0);
    uVar3 = sub_080FE460(*(undefined *)(param_1 + 0xdd6),5);
    *(ushort *)(iVar4 + 0x76) = ((uVar3 & 0xff) - (ushort)*(byte *)(param_1 + 0xdd7)) * 0x10 + 0x18;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    return in_lr;
  }
  bVar2 = *(byte *)(param_1 + 0xdd6);
  if ((DAT_02002136 & 0x20) == 0) {
    if ((DAT_02002136 & 0x10) == 0) {
      if ((DAT_02002136 & 0x40) == 0) {
        if (((DAT_02002136 & 0x80) != 0) && (bVar2 < 0xaf)) {
          cVar1 = bVar2 + 5;
          goto LAB_080f8262;
        }
      }
      else if (4 < bVar2) {
        cVar1 = bVar2 - 5;
LAB_080f8262:
        *(char *)(param_1 + 0xdd6) = cVar1;
      }
    }
    else if (bVar2 < 0xb3) {
      cVar1 = bVar2 + 1;
      goto LAB_080f8262;
    }
  }
  else if (bVar2 != 0) {
    cVar1 = bVar2 - 1;
    goto LAB_080f8262;
  }
  if (bVar2 != *(byte *)(param_1 + 0xdd6)) {
    sub_0800471C(1);
  }
  bVar2 = sub_080FE460(*(undefined *)(param_1 + 0xdd6),5);
  if ((uint)bVar2 < (uint)*(byte *)(param_1 + 0xdd7)) {
    *(byte *)(param_1 + 0xdd7) = bVar2;
  }
  else {
    if ((int)(bVar2 - 5) <= (int)(uint)*(byte *)(param_1 + 0xdd7)) goto LAB_080f82a0;
    *(byte *)(param_1 + 0xdd7) = bVar2 - 5;
  }
  *(undefined *)(param_1 + 0xdd8) = 1;
LAB_080f82a0:
  iVar5 = *(int *)(param_1 + 0xdd0);
  iVar4 = sub_080FE4D8(*(undefined *)(param_1 + 0xdd6),5);
  *(ushort *)(iVar5 + 0x74) = (ushort)((uint)(iVar4 << 0x18) >> 0x14) + 0x18;
  iVar4 = *(int *)(param_1 + 0xdd0);
  uVar3 = sub_080FE460(*(undefined *)(param_1 + 0xdd6),5);
  *(ushort *)(iVar4 + 0x76) = ((uVar3 & 0xff) - (ushort)*(byte *)(param_1 + 0xdd7)) * 0x10 + 0x18;
  if ((DAT_02002134 & 1) == 0) {
    if ((DAT_02002134 & 2) != 0) {
      *(undefined *)(param_1 + 1) = 3;
    }
  }
  else if (((int)(*(byte *)(DAT_0203df90 + (uint)(*(byte *)(param_1 + 0xdd6) >> 2)) & 0xf) >>
            (*(byte *)(param_1 + 0xdd6) & 3) & 1U) == 0) {
    sub_0800471C(4);
  }
  else {
    *(undefined *)(*(int *)(param_1 + 0xdd0) + 0x78) = 1;
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 0;
  }
  return in_lr;
}

