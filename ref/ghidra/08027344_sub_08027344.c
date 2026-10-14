// sub_08027344 at 0x08027344 (thumb)

ulonglong sub_08027344(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x10);
  if ((9 < uVar3) && (uVar2 = (uint)*(byte *)(param_2 + 0xd), uVar3 != uVar2 + 10)) {
    cVar1 = *(char *)(param_1 + 0x71);
    uVar4 = (ushort)cVar1;
    if ((uVar2 == 1) && (*(char *)(param_1 + 0xd) == '\x01')) {
      uVar3 = 6;
      *(undefined *)(param_1 + 0x10) = 6;
      *(undefined *)(param_1 + 0xd) = 2;
      uVar4 = 0;
      sub_08025C94(param_1,0x201,0,(short)*(char *)(param_1 + 0x72));
    }
    else {
      uVar3 = uVar2 + 10;
      *(char *)(param_1 + 0x10) = (char)uVar3;
      sub_08025C94(param_1,*(undefined2 *)(&DAT_082aa440 + uVar3 * 2),uVar4,
                   (short)*(char *)(param_1 + 0x72));
    }
    sub_08027404(param_1,uVar4 & 0xff,cVar1);
  }
  return CONCAT44(in_lr,uVar3) & 0xffffffff000000ff;
}

