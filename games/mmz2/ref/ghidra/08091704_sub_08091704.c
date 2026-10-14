// sub_08091704 at 0x08091704 (thumb)

undefined4 sub_08091704(int param_1)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (((DAT_0202ec44 & 1) == 0) || (*(int *)(param_1 + 0x28) != 0)) {
    puVar5 = (ushort *)(param_1 + 0xba);
    uVar1 = *puVar5;
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *puVar5 = uVar1 - 1;
      if ((ushort)(uVar1 - 1) < 0x3c) {
        if ((*puVar5 & 1) == 0) {
LAB_080917b0:
          bVar2 = *(byte *)(param_1 + 10) & 0xfe;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 1;
        }
LAB_080917b6:
        *(byte *)(param_1 + 10) = bVar2;
      }
      else if ((ushort)(uVar1 - 1) < 0xb4) {
        if ((*puVar5 & 3) == 0) goto LAB_080917b0;
        bVar2 = *(byte *)(param_1 + 10) | 1;
        goto LAB_080917b6;
      }
      if (*(char *)(param_1 + 0xd) == '\x02') {
        uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
        uVar6 = 0xefff;
LAB_080917e8:
        if (uVar6 < uVar3) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          goto LAB_08091808;
        }
      }
      else if (*(char *)(param_1 + 0xd) == '\x04') {
        uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
        uVar6 = 0x1fff;
        goto LAB_080917e8;
      }
      if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
        if ((((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(int *)(param_1 + 0x2c) == 0)) &&
           (*(char *)(param_1 + 0xd) != '\x06')) {
          iVar4 = sub_0801E11C(0,param_1,&DAT_0834263c);
          *(int *)(param_1 + 0x2c) = iVar4;
          if (iVar4 == 0) {
            if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
              *(undefined *)(param_1 + 0xd) = 6;
              *(undefined *)(param_1 + 0xe) = 0;
            }
          }
          else {
            *(undefined *)(param_1 + 0xd) = 5;
            *(undefined *)(param_1 + 0xe) = 0;
          }
        }
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08342620 + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
    }
    sub_080918C4(param_1);
  }
  else {
    sub_080AC60C(1,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
LAB_08091808:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

