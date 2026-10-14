// sub_080513A4 at 0x080513A4 (thumb)

undefined4 sub_080513A4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x10) == '\a') {
    if ((DAT_02022ae0 & 0x10) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x11) == '\x02')) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    if ((DAT_02022ae0 & 0x10) == 0) {
LAB_080513fa:
      if (iVar2 != 0) {
        if (1 < *(byte *)(iVar2 + 0xc)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
          return in_lr;
        }
        if (*(char *)(iVar2 + 0x11) == '\x02') {
          if (*(char *)(param_1 + 0x11) != '\x02') {
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined *)(param_1 + 0x94) = 0;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
            *(undefined *)(param_1 + 0x11) = 2;
            *(undefined *)(param_1 + 0xd) = 0;
            *(undefined *)(param_1 + 0xe) = 1;
          }
        }
        else if ((*(char *)(param_1 + 0xc2) != '\0') && (*(char *)(param_1 + 0x11) != '\x02')) {
          *(undefined4 *)(iVar2 + 0x24) = 0;
          sub_080511D0(iVar2);
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0x11) = 2;
          *(undefined *)(param_1 + 0xe) = 0;
        }
        goto LAB_08051548;
      }
    }
    else if ((*(char *)(param_1 + 0x11) == '\x02') || (iVar2 != 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      goto LAB_080513fa;
    }
    if ((*(char *)(param_1 + 0xc2) != '\0') && (*(char *)(param_1 + 0x11) != '\x02')) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0x11) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_08051548:
  if (*(char *)(param_1 + 0x10) != '\a') {
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
      iVar2 = sub_08048BE8(param_1);
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') goto LAB_080515ae;
    }
    if (cVar1 == '\x01') {
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0xf) = 2;
    }
    iVar2 = sub_08048BE8(param_1);
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    if (*(char *)(param_1 + 0x11) != '\x02') {
      return in_lr;
    }
  }
LAB_080515ae:
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af4e0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af4ec + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

