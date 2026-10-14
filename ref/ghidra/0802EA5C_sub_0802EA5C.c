// sub_0802EA5C at 0x0802EA5C (thumb)

undefined8 sub_0802EA5C(int param_1,byte param_2,uint param_3)

{
  int iVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  iVar1 = (param_3 & 0xff) * 3;
  if (param_2 < (byte)(&DAT_082ad2af)[iVar1]) {
    *(undefined *)(param_1 + 0x12) = 0x50;
  }
  else if (param_2 < (byte)(&DAT_082ad2b0)[iVar1]) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x11) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else if (param_2 < (byte)(&DAT_082ad2b1)[iVar1]) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x11) = 1;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  else {
    uVar4 = 1;
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 0x1f;
    if (uVar3 < (byte)(&DAT_082ad2be)[iVar1]) {
      uVar2 = 7;
    }
    else if ((uVar3 < (byte)(&DAT_082ad2bf)[iVar1]) || (*(byte *)(DAT_02022b20 + 1) < 5)) {
      uVar2 = 0xe;
    }
    else if (uVar3 < (byte)(&DAT_082ad2c0)[iVar1]) {
      uVar2 = 0x15;
    }
    else {
      uVar2 = 9;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,uVar4);
}

