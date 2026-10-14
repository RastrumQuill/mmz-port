// sub_080B4AC4 at 0x080B4AC4 (thumb)

undefined4 sub_080B4AC4(int param_1)

{
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar5 = bVar2 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  bVar3 = *(byte *)(param_1 + 0x10);
  uVar1 = (undefined)uVar5;
  if (bVar3 == 1) {
    sub_08012580(param_1);
    if ((bVar2 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(undefined *)(param_1 + 0x4c) = uVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    uVar4 = 0x2800;
  }
  else if (bVar3 < 2) {
    if (bVar3 != 0) goto LAB_080b4c56;
    *(undefined *)(param_1 + 0x22) = 1;
    sub_08012580(param_1);
    if ((bVar2 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(undefined *)(param_1 + 0x4c) = uVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    uVar4 = 0x2800;
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 == 3) {
        *(undefined *)(param_1 + 0x22) = 1;
        sub_080126A0(param_1);
        if ((bVar2 & 1) == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        *(undefined *)(param_1 + 0x4c) = uVar1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
        sub_080127E4(param_1,0x2802);
        *(undefined2 *)(param_1 + 0x50) = 0x100;
        *(undefined2 *)(param_1 + 0x52) = 0x100;
        *(undefined *)(param_1 + 0x12) = 0;
        *(undefined *)(param_1 + 0x74) = 1;
      }
      goto LAB_080b4c56;
    }
    sub_08012580(param_1);
    if ((bVar2 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(undefined *)(param_1 + 0x4c) = uVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    uVar4 = 0x2803;
  }
  sub_080127E4(param_1,uVar4);
  *(undefined *)(param_1 + 0x12) = 0;
LAB_080b4c56:
  sub_080B4C68(param_1);
  return in_lr;
}

