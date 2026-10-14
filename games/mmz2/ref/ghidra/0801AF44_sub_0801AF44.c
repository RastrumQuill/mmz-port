// sub_0801AF44 at 0x0801AF44 (thumb)

longlong sub_0801AF44(ushort *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x10);
  sub_0801B130();
  puVar3 = param_1 + 0xbe;
  if (*(char *)puVar3 != '\0') {
    if ((((*(char *)puVar3 == '\x01') && ((DAT_0202ebb5 & 1) == 0)) &&
        ((&DAT_0831348c)[*(int *)(iVar2 + 0x54) >> 0xc] == '\f')) &&
       ((&DAT_08312c8c)[*(int *)(iVar2 + 0x58) >> 0xc] == '\x01')) {
      sub_0801B454(&DAT_0202ec40,*(undefined4 *)((&DAT_083263f0)[*param_1] + 0x10));
    }
    sub_0801B218(param_1);
    goto LAB_0801b114;
  }
  DAT_0202ec38 = DAT_0202ec38 | 1;
  param_1[5] = 0;
  if (DAT_0202ec32 == 0) {
    sub_0801B454(&DAT_0202ec40,*(undefined4 *)(&DAT_083263f0)[*param_1]);
    *(char *)puVar3 = '\x01';
  }
  else {
    if (DAT_0202ec32 == 1) {
      uVar1 = *(undefined4 *)((&DAT_083263f0)[*param_1] + 4);
LAB_0801b088:
      sub_0801B454(&DAT_0202ec40,uVar1);
    }
    else {
      if (DAT_0202ec32 == 2) {
        uVar1 = *(undefined4 *)((&DAT_083263f0)[*param_1] + 8);
        goto LAB_0801b088;
      }
      if (DAT_0202ec32 == 3) {
        uVar1 = *(undefined4 *)((&DAT_083263f0)[*param_1] + 0x1c);
        goto LAB_0801b088;
      }
      if (DAT_0202ec32 == 4) {
        uVar1 = *(undefined4 *)((&DAT_083263f0)[*param_1] + 0x20);
        goto LAB_0801b088;
      }
      if (DAT_0202ec32 != 5) {
        if (DAT_0202ec32 == 6) {
          uVar1 = *(undefined4 *)((&DAT_083263f0)[*param_1] + 0x2c);
        }
        else {
          if (DAT_0202ec32 == 7) {
            sub_0801B454(&DAT_0202ec40,*(undefined4 *)((&DAT_083263f0)[*param_1] + 0x34));
            DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
            goto LAB_0801b08c;
          }
          if (DAT_0202ec32 != 8) {
            if (DAT_0202ec32 == 9) {
              sub_0801B454(&DAT_0202ec40,*(undefined4 *)((&DAT_083263f0)[*param_1] + 0x44));
              *(undefined *)(param_1 + 0xbe) = 0xff;
            }
            goto LAB_0801b0bc;
          }
          uVar1 = *(undefined4 *)((&DAT_083263f0)[*param_1] + 0x3c);
        }
        goto LAB_0801b088;
      }
      sub_0801B454(&DAT_0202ec40,*(undefined4 *)((&DAT_083263f0)[*param_1] + 0x28));
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
    }
LAB_0801b08c:
    *(char *)puVar3 = -1;
  }
LAB_0801b0bc:
  *(undefined *)((int)param_1 + 0x17d) = 0;
LAB_0801b114:
  return (ulonglong)in_lr << 0x20;
}

