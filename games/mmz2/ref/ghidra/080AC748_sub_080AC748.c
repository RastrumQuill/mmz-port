// sub_080AC748 at 0x080AC748 (thumb)

undefined8 sub_080AC748(uint param_1,undefined4 *param_2,undefined2 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
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
    sub_080126A0(iVar2);
    sub_080127E4(iVar2,(&DAT_08345ad8)[param_1 & 0xff]);
    *(undefined2 *)(iVar2 + 0x50) = param_3;
    *(undefined2 *)(iVar2 + 0x52) = param_3;
    if ((param_4 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)param_4;
    pbVar4 = (byte *)(iVar2 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef | (byte)((param_4 & 1) << 4);
    uVar3 = (param_4 & 0xffff) >> 8;
    if (uVar3 == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x20;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4d) = (char)((param_4 & 0xffff) >> 8);
    *pbVar4 = *pbVar4 & 0xdf | (byte)((uVar3 & 1) << 5);
  }
  return CONCAT44(in_lr,iVar2);
}

