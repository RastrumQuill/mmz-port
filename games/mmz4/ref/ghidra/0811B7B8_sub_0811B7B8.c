// sub_0811B7B8 at 0x0811B7B8 (thumb)

undefined4 sub_0811B7B8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x63a8);
  *(undefined *)(param_1 + 0xde4) = 0;
  *(undefined *)(param_1 + 0xde5) = 0;
  sub_08001D30(&DAT_08b6c1cc,(DAT_02000a06 & 0xc) << 0xc);
  sub_08002208(&DAT_08b6c1d8,0);
  if (*(char *)(iVar3 + 0xf5) == -1) {
    sub_080027B8(param_1 + 0x16d8,&DAT_08b2c000,0x17,0,0);
  }
  else {
    sub_080027B8(param_1 + 0x16d8,&DAT_08b2c000,*(char *)(iVar3 + 0xf0) + '\x17',0,0);
  }
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  sub_08001D30(&DAT_08c44528,(DAT_0202e0c4 - 0x300) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44534,(DAT_0202dec4 - 8) * 0x20 + 0x200);
  if (*(char *)(iVar3 + 0xf5) != -1) {
    iVar2 = param_1 + 0xde5;
    sub_0810B0C0(param_1,iVar2,0,0);
    sub_0810B0C0(param_1,iVar2,0,1);
    sub_0810B0C0(param_1,iVar2,0,2);
    sub_0810B0C0(param_1,iVar2,3,0);
    bVar1 = 0;
    if (*(byte *)(iVar3 + 0xf0) != 0) {
      iVar2 = param_1 + 0xde5;
      do {
        sub_0810B0C0(param_1,iVar2,1,bVar1);
        sub_0810B0C0(param_1,iVar2,1,bVar1 | 0x10);
        sub_0810B0C0(param_1,iVar2,1,bVar1 | 0x20);
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(iVar3 + 0xf0));
    }
  }
  sub_0810B0C0(param_1,param_1 + 0xde5,2,0);
  sub_0800249C(0x41,0);
  *(undefined *)(param_1 + 2) = 2;
  return in_lr;
}

