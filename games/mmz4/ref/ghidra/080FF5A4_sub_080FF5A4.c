// sub_080FF5A4 at 0x080FF5A4 (thumb)

undefined4 sub_080FF5A4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        DAT_0202daee = (byte)(1 << *(sbyte *)(param_1 + 0x10)) | DAT_0202daee;
        sub_08002B10(0x186);
        local_c = *(undefined4 *)(param_1 + 0x58);
        local_10 = *(int *)(param_1 + 0x54) + -0x1800;
        sub_08092A58(&local_10,1,*(char *)(param_1 + 0x10) * '\x03');
        local_10 = *(int *)(param_1 + 0x54);
        local_c = *(undefined4 *)(param_1 + 0x58);
        sub_08092A58(&local_10,1,*(char *)(param_1 + 0x10) * '\x03' + '\x01');
        local_c = *(undefined4 *)(param_1 + 0x58);
        local_10 = *(int *)(param_1 + 0x54) + 0x1800;
        sub_08092A58(&local_10,1,*(char *)(param_1 + 0x10) * '\x03' + '\x02');
        *(undefined4 *)(param_1 + 0x60) = 0x180;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar2 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar2;
      if (*(int *)(param_1 + 0xb4) <= iVar2) {
        return in_lr;
      }
      DAT_0202daef = (byte)(1 << *(sbyte *)(param_1 + 0x10)) | DAT_0202daef;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4);
      *(undefined *)(param_1 + 0xd) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar2 = *(int *)(param_1 + 0x58);
      iVar4 = 0x6000;
    }
    else if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x58);
      iVar4 = 0x5000;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x58);
      iVar4 = 0x4000;
    }
    *(int *)(param_1 + 0x58) = iVar2 + iVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (uVar3 < 0xf001) {
    iVar2 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
    }
    if (0x6000 < iVar2) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

