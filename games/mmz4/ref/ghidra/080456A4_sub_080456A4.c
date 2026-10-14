// sub_080456A4 at 0x080456A4 (thumb)

undefined4 sub_080456A4(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  iVar3 = sub_08005500(DAT_0202ed88);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar3 + 9) = 0x17;
      *(undefined4 *)(iVar3 + 0x14) = 0x8045889;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      uVar1 = 1;
    }
    else {
      *(undefined *)(iVar3 + 9) = 0x17;
      *(undefined4 *)(iVar3 + 0x14) = 0x8045889;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = 0x30;
      uVar1 = 2;
    }
    *(undefined *)(iVar3 + 0x22) = uVar1;
    *(int *)(iVar3 + 0x28) = param_2;
    *(int *)(iVar3 + 0x2c) = param_1;
    *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(iVar3 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined *)(iVar3 + 0x10) = 2;
    *(undefined *)(iVar3 + 0x11) = 0;
    if ((param_3 & 0xff) == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(char *)(iVar3 + 0x4c) = (char)(param_3 & 1);
    pbVar4 = (byte *)(iVar3 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef | (byte)((param_3 & 1) << 4);
    if ((param_4 & 0xff) == 0) {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xdf;
    }
    else {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 0x20;
    }
    *(char *)(iVar3 + 0x4d) = (char)(param_4 & 1);
    *pbVar4 = *pbVar4 & 0xdf | (byte)((param_4 & 1) << 5);
  }
  return in_lr;
}

