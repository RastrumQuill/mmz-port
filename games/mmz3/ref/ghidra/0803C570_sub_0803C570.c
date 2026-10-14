// sub_0803C570 at 0x0803C570 (thumb)

undefined4 sub_0803C570(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(byte *)(iVar3 + 0xc) < 2) && (*(char *)(iVar3 + 0xd) == '\x03')) {
      if (*(int *)(iVar3 + 0x60) == 0) {
        bVar1 = *(byte *)(param_1 + 10);
        *(byte *)(param_1 + 10) = bVar1 | 1;
        *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + 0xd00;
        bVar2 = *(byte *)(param_1 + 0x12);
        iVar3 = bVar2 + 1;
        *(char *)(param_1 + 0x12) = (char)iVar3;
        if ((bVar2 & 1) != 0) {
          if (((uint)(iVar3 * 0x1000000) >> 0x19 & 1) == 0) {
            sub_080B322C(param_1 + 0x54,5,~(bVar1 >> 4) & 1);
          }
          else {
            sub_080B322C(param_1 + 0x54,4,~(bVar1 >> 4) & 1);
          }
        }
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
    sub_0803C660(param_1);
  }
  return in_lr;
}

