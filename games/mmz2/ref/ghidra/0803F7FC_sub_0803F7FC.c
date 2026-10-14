// sub_0803F7FC at 0x0803F7FC (thumb)

undefined8 sub_0803F7FC(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f070);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x10;
    *(undefined4 *)(iVar1 + 0x14) = 0x803f631;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 1;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(int *)(iVar1 + 0x5c) = (int)(short)(&DAT_080ef450)[(param_3 & 0xff) + 0x40 & 0xff] << 2;
    *(int *)(iVar1 + 0x60) = (int)(short)(&DAT_080ef450)[param_3 & 0xff] << 2;
  }
  return CONCAT44(in_lr,iVar1);
}

