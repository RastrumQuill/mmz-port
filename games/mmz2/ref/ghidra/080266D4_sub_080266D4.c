// sub_080266D4 at 0x080266D4 (thumb)

undefined4 sub_080266D4(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x176);
  if (bVar1 < 2) {
    bVar2 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
    if ((bVar2 & 1) == 0) {
      if ((bVar2 & 2) != 0) {
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 0x102;
        sub_0801EA38(param_1,0x12,5 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
        sub_08026AA4(param_1);
        return in_lr;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x58);
      uVar5 = (uint)*(byte *)(param_1 + 0x182);
      if (uVar5 < 100) {
        if (((*(byte *)(param_1 + 0x202) & 8) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
          iVar7 = 0x200;
        }
        else {
          iVar7 = 0x280;
        }
        if (((*(byte *)(param_1 + 0x202) & 8) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
          iVar6 = uVar5 << 9;
        }
        else {
          iVar6 = uVar5 * 0x280;
        }
        iVar6 = sub_080EF150(iVar6,100);
        iVar7 = iVar7 - iVar6;
      }
      else {
        iVar7 = 0;
      }
      *(int *)(param_1 + 0x58) = iVar4 - iVar7;
      iVar7 = param_1 + 0x54;
      piVar8 = (int *)(param_1 + 0xd8);
      sub_0801F5B8(iVar7,param_1 + 0xb4,piVar8,*piVar8,*(undefined4 *)(param_1 + 0xdc),
                   *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
      if (*(int *)(param_1 + 0x58) < iVar4) {
        sVar3 = sub_08021534(iVar7,*piVar8,*(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,0);
        if (sVar3 == 0) {
          *(undefined *)(param_1 + 0xf) = 2;
          iVar4 = *piVar8;
          *(uint *)(param_1 + 0x58) =
               *(int *)(param_1 + 0x58) +
               (int)(((uint)*(ushort *)(iVar4 + 4) - (uint)*(ushort *)(iVar4 + 6)) + 0x100) / 2 +
               (uint)*(ushort *)(iVar4 + 4);
          sub_0801E9FC(param_1,0x10);
          sub_0801F57C(iVar7,param_1 + 0xb4,piVar8,*piVar8,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
        }
        if ((*(char *)(param_1 + 0x71) != '\x02') && (*(char *)(param_1 + 0x71) != '\x05')) {
          return in_lr;
        }
        if ('\x01' < *(char *)(param_1 + 0x72)) {
          return in_lr;
        }
        sub_0801E6AC(0xd);
        return in_lr;
      }
    }
  }
  if ((bVar1 < 3) && (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_0801EA38(param_1,*(undefined *)(param_1 + 0x17f),(int)*(char *)(param_1 + 0x71),2);
  }
  return in_lr;
}

