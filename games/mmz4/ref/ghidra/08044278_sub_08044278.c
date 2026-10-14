// sub_08044278 at 0x08044278 (thumb)

undefined4 sub_08044278(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  cVar1 = sub_0803A9A8(param_1,0xff);
  if (*(char *)(iVar3 + 0xfa) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        uVar2 = sub_0803AD90(param_1,0);
        uVar2 = uVar2 & 0xff;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          if (0x50 < (uVar2 - 0x58 & 0xff)) {
            uVar2 = 0x80;
          }
        }
        else if ((uVar2 - 0x29 & 0xff) < 0xaf) {
          uVar2 = 0;
        }
        *(int *)(param_1 + 0x5c) =
             *(short *)((int)&DAT_08128c10 + ((uVar2 + 0xc0) * 0x1000000 >> 0x17)) * -0x300 >> 8;
        *(int *)(param_1 + 0x60) =
             *(short *)((int)&DAT_08128c10 + ((uVar2 + 0x80) * 0x1000000 >> 0x17)) * -0x300 >> 8;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

