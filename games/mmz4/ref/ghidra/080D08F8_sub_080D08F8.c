// sub_080D08F8 at 0x080D08F8 (thumb)

undefined8 sub_080D08F8(uint param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed9c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 1;
    *(undefined *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0x80d0b89;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = param_2[1];
    sub_0801CC9C(iVar2);
    sub_0801CF00(iVar2,(&DAT_08863bb0)[param_1 & 0xff]);
    if ((param_3 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)(param_3 & 1);
    pbVar3 = (byte *)(iVar2 + 0x4a);
    *pbVar3 = *pbVar3 & 0xef | (byte)((param_3 & 1) << 4);
    if ((param_4 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x20;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4d) = (char)(param_4 & 1);
    *pbVar3 = *pbVar3 & 0xdf | (byte)((param_4 & 1) << 5);
  }
  return CONCAT44(in_lr,iVar2);
}

