// sub_08120664 at 0x08120664 (thumb)

undefined8 sub_08120664(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = (uint)*(byte *)(param_1 + 0xdd2 + (uint)*(byte *)(param_1 + 0xdce));
  bVar1 = *(byte *)(param_1 + 0xdde);
  if (bVar1 == 1) {
LAB_081206aa:
    iVar4 = uVar5 * 8;
    uVar2 = (uint)(byte)(&DAT_088861cd)[iVar4] << 0x18;
    if ((uint)*(byte *)(param_1 + 0xddf) < uVar2 >> 0x19) {
      uVar5 = (uint)*(byte *)(param_1 + 0xddf) + (uVar2 >> 0x1c);
      *(char *)(param_1 + 0xddf) = (char)uVar5;
      *(byte *)(param_1 + 0xde0) = ((byte)(&DAT_088861ce)[iVar4] >> 4) + *(char *)(param_1 + 0xde0);
      if ((uint)((byte)(&DAT_088861cd)[iVar4] >> 1) < (uVar5 & 0xff)) {
        *(byte *)(param_1 + 0xddf) = (byte)(&DAT_088861cd)[iVar4] >> 1;
      }
      if ((byte)(&DAT_088861ce)[iVar4] >> 1 < *(byte *)(param_1 + 0xde0)) {
        *(byte *)(param_1 + 0xde0) = (byte)(&DAT_088861ce)[iVar4] >> 1;
      }
    }
    else {
      *(byte *)(param_1 + 0xddf) = (byte)(&DAT_088861cd)[iVar4] >> 1;
      *(byte *)(param_1 + 0xde0) = (byte)(&DAT_088861ce)[iVar4] >> 1;
      sub_0810C58C(param_1,uVar5,(&DAT_088861cc)[iVar4],*(undefined2 *)(&DAT_088861c8 + iVar4),
                   ((char)(&DAT_088861ca)[iVar4] + 0x40) * 0x100,
                   ((char)(&DAT_088861cb)[iVar4] + 0x50) * 0x100,(&DAT_088861cf)[iVar4]);
      *(char *)(param_1 + 0xdde) = *(char *)(param_1 + 0xdde) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined *)(param_1 + 0xddf) = 0;
      *(undefined *)(param_1 + 0xde0) = 0;
      sub_08002B10(2);
      *(char *)(param_1 + 0xdde) = *(char *)(param_1 + 0xdde) + '\x01';
      goto LAB_081206aa;
    }
  }
  else if (bVar1 == 2) {
    if ((DAT_02000764 & 3) != 0) {
      sub_08002B10(3);
      *(char *)(param_1 + 0xdde) = *(char *)(param_1 + 0xdde) + '\x01';
    }
  }
  else if (bVar1 == 3) {
    bVar1 = *(byte *)(param_1 + 0xddf);
    if (bVar1 == 0) {
      *(byte *)(param_1 + 0xddf) = bVar1;
      *(byte *)(param_1 + 0xde0) = bVar1;
      *(byte *)(param_1 + 0xdde) = bVar1;
      uVar3 = 1;
      goto LAB_08120792;
    }
    iVar4 = (uint)bVar1 - (uint)((byte)(&DAT_088861cd)[uVar5 * 8] >> 4);
    if (iVar4 < 1) {
      *(undefined *)(param_1 + 0xddf) = 0;
      *(undefined *)(param_1 + 0xde0) = 0;
    }
    else {
      *(char *)(param_1 + 0xddf) = (char)iVar4;
      iVar4 = (uint)*(byte *)(param_1 + 0xde0) - (uint)((byte)(&DAT_088861ce)[uVar5 * 8] >> 4);
      if (iVar4 < 1) {
        *(undefined *)(param_1 + 0xde0) = 0;
      }
      else {
        *(char *)(param_1 + 0xde0) = (char)iVar4;
      }
    }
  }
  uVar3 = 0;
LAB_08120792:
  return CONCAT44(in_lr,uVar3);
}

