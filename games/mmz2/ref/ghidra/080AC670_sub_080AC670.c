// sub_080AC670 at 0x080AC670 (thumb)

undefined8 sub_080AC670(uint param_1,undefined4 *param_2,byte param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08006B84(DAT_0202f084);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 1;
    *(undefined *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0x80ac82d;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = param_2[1];
    sub_08012580(iVar2);
    sub_080127E4(iVar2,(&DAT_08345ad8)[param_1 & 0xff]);
    if (param_3 == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(byte *)(iVar2 + 0x4c) = param_3;
    pbVar3 = (byte *)(iVar2 + 0x4a);
    *pbVar3 = *pbVar3 & 0xef | (byte)((param_3 & 1) << 4);
    if (param_4 == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x20;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(byte *)(iVar2 + 0x4d) = param_4;
    *pbVar3 = *pbVar3 & 0xdf | (byte)((param_4 & 1) << 5);
  }
  return CONCAT44(in_lr,iVar2);
}

