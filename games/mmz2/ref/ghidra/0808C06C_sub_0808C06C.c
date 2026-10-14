// sub_0808C06C at 0x0808C06C (thumb)

undefined4 sub_0808C06C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x11) == '\x02') && ((DAT_0202ebbb & 0x20) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 0x200) == 0) {
    if (((byte)(*(char *)(param_1 + 0x10) - 2U) < 2) &&
       (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    else {
      if (*(char *)(param_1 + 0xf) == '\0') {
        iVar3 = sub_08065A24(param_1);
        if (iVar3 != 0) {
          *(undefined *)(param_1 + 0xf) = 1;
        }
        if (*(char *)(param_1 + 0xf) == '\0') {
          piVar5 = (int *)(param_1 + 0xb8);
          if (*piVar5 == 0) {
            sub_080EF118(param_1,*(undefined4 *)(&DAT_08341e70 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            sub_080EF118(param_1,*(undefined4 *)(&DAT_08341ea0 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            if ((*puVar4 & 1) == 0) {
              return in_lr;
            }
            iVar3 = sub_0801E11C(0,param_1,&DAT_08341edc);
            *piVar5 = iVar3;
            if (iVar3 == 0) {
              return in_lr;
            }
            sub_08006E08(param_1 + 0x74,&DAT_08341e40);
            *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
            *(undefined4 *)(param_1 + 0x60) = 0;
            sub_080127E4(param_1,0x7505);
            sub_080128D4(param_1);
            *(undefined *)(param_1 + 0x24) = 0;
            *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
            *(undefined *)(param_1 + 0xd) = 0;
            *(undefined *)(param_1 + 0xe) = 0;
            return in_lr;
          }
          iVar3 = sub_0801E4D8();
          if (iVar3 != 0) {
            sub_08006E08(param_1 + 0x74,&DAT_08341cc0);
            *piVar5 = 0;
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x68);
            return in_lr;
          }
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0xa00,*(undefined4 *)(param_1 + 0x58));
          if (iVar3 < 0) {
            return in_lr;
          }
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58));
          if (iVar3 < 0) {
            return in_lr;
          }
          iVar3 = *(int *)(param_1 + 0x60) + 0x40;
          *(int *)(param_1 + 0x60) = iVar3;
          if (0x700 < iVar3) {
            *(undefined4 *)(param_1 + 0x60) = 0x700;
          }
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0xa00);
          if (iVar3 < 0) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
          }
          iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58));
          if (-1 < iVar3) {
            return in_lr;
          }
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
          return in_lr;
        }
      }
      if (*(char *)(param_1 + 0xd) == '\x05') {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
        bVar2 = *(byte *)(param_1 + 0x95);
        if (bVar2 < 0xff) {
          bVar2 = 0;
        }
        else {
          bVar2 = bVar2 + 1;
        }
        *(byte *)(param_1 + 0x95) = bVar2;
        sub_08006E08(param_1 + 0x74,&DAT_08341cc0);
      }
      if (*(char *)(param_1 + 0xf) == '\x01') {
        sub_080128D4(param_1);
        *(undefined *)(param_1 + 0xf) = 2;
        *(undefined4 *)(param_1 + 0xb8) = 0;
        sub_08006E08(param_1 + 0x74,&DAT_08341cc0);
      }
      iVar3 = sub_08065A24(param_1);
      if (iVar3 == 0) {
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0xd);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(char *)(param_1 + 0xf) = cVar1;
    if ((*puVar4 & 0x18000) == 0x10000) {
      if ((((cVar1 != '\x01') && (cVar1 != '\x03')) && (cVar1 != '\x06')) &&
         ((*(undefined4 *)(param_1 + 0x60) = 0, cVar1 != '\x02' && (cVar1 != '\b')))) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    sub_0808C318(param_1);
  }
  return in_lr;
}

