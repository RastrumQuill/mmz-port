// sub_08085FBC at 0x08085FBC (thumb)

undefined4 sub_08085FBC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x34);
  }
  if ((*(int *)(param_1 + 0x28) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (((DAT_0202e924 & 1) == 0) || (*(int *)(param_1 + 0x28) != 0)) {
    uVar3 = *(ushort *)(param_1 + 0xb8) - 1;
    *(ushort *)(param_1 + 0xb8) = (ushort)uVar3;
    iVar2 = (int)(uVar3 * 0x10000) >> 0x10;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 3;
    }
    else {
      if (iVar2 < 0x3c) {
        if ((uVar3 & 1) == 0) {
LAB_0808606c:
          bVar1 = *(byte *)(param_1 + 10) | 1;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        }
LAB_08086072:
        *(byte *)(param_1 + 10) = bVar1;
      }
      else if (iVar2 < 0xb4) {
        if ((uVar3 & 3) != 0) goto LAB_0808606c;
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        goto LAB_08086072;
      }
      if ((*(char *)(param_1 + 0xb7) == '\0') &&
         (puVar4 = (uint *)(param_1 + 0x8c), (*puVar4 & 4) == 0)) {
        if (*(char *)(param_1 + 0xd) == '\x03') {
          uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
          if (0x5000 < uVar3) {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
            *puVar4 = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined *)(param_1 + 0x94) = 0;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
            bVar1 = *(byte *)(param_1 + 9);
            *(undefined4 *)(param_1 + 0xc) = 3;
            goto LAB_08086172;
          }
        }
        else if ((*(char *)(param_1 + 0xd) == '\x04') &&
                (uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), 0xf000 < uVar3)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *puVar4 = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          bVar1 = *(byte *)(param_1 + 9);
          *(undefined4 *)(param_1 + 0xc) = 3;
LAB_08086172:
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)bVar1 * 4) + 0xc);
          return in_lr;
        }
        if ((((*puVar4 & 1) != 0) && (*(int *)(param_1 + 0x2c) == 0)) &&
           (*(char *)(param_1 + 0xd) != '\x04')) {
          iVar2 = sub_0802AD94(0,param_1,&DAT_0885b900);
          *(int *)(param_1 + 0x2c) = iVar2;
          *(undefined *)(param_1 + 0xd) = 4;
          *(undefined *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0xf) = 0;
          if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
            *(undefined *)(param_1 + 0xe) = 2;
          }
          else if (iVar2 == 0) {
            *(undefined *)(param_1 + 0xe) = 0;
            *(undefined *)(param_1 + 0xf) = 0;
          }
          else {
            *(undefined *)(param_1 + 0xe) = 1;
            *(undefined *)(param_1 + 0xf) = 0;
          }
        }
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885b7b4 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_08128884(param_1,*(undefined4 *)(&UNK_0885b7c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
      if (*(char *)(param_1 + 0xbc) != '\0') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        goto LAB_080860d4;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
LAB_080860d4:
  sub_080865AC(param_1);
  return in_lr;
}

