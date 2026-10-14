// sub_08026AA4 at 0x08026AA4 (thumb)

undefined4 sub_08026AA4(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x176) < 2) {
    bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
    if ((bVar1 & 2) != 0) {
      uVar3 = (uint)*(byte *)(param_1 + 0x182);
      if (uVar3 < 100) {
        if (((*(byte *)(param_1 + 0x202) & 8) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
          iVar5 = 0x200;
        }
        else {
          iVar5 = 0x280;
        }
        if (((*(byte *)(param_1 + 0x202) & 8) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
          iVar4 = uVar3 << 9;
        }
        else {
          iVar4 = uVar3 * 0x280;
        }
        iVar4 = sub_080EF150(iVar4,100);
        iVar5 = iVar5 - iVar4;
      }
      else {
        iVar5 = 0;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
      puVar6 = (undefined4 *)(param_1 + 0xd8);
      sVar2 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,puVar6,*puVar6,
                           *(undefined4 *)(param_1 + 0xdc),*(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1)
      ;
      if (sVar2 == 0) {
        sVar2 = sub_08021534(param_1 + 0x54,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,0);
        if (sVar2 == 0) {
          *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
          *(undefined *)(param_1 + 0xd) = 1;
          *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
          *(undefined2 *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
          *(undefined *)(param_1 + 0x176) = 0;
          *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
          *(undefined *)(param_1 + 0x177) = 0;
          *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
          *(undefined *)(param_1 + 0x178) = 0;
          *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
          *(undefined *)(param_1 + 0x179) = 0;
        }
      }
      else {
        *(undefined *)(param_1 + 0xf) = 2;
        sub_0801E9FC(param_1,0x13);
      }
      if ((*(char *)(param_1 + 0x71) != '\x01') && (*(char *)(param_1 + 0x71) != '\x04')) {
        return in_lr;
      }
      if ('\x01' < *(char *)(param_1 + 0x72)) {
        return in_lr;
      }
      sub_0801E6AC(0xd);
      return in_lr;
    }
    if ((bVar1 & 1) != 0) {
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0x101;
      sub_0801EA38(param_1,0xf,5 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
      sub_080266D4(param_1);
      return in_lr;
    }
  }
  if ((*(byte *)(param_1 + 0x176) < 3) && (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_0801EA38(param_1,*(undefined *)(param_1 + 0x17f),(int)*(char *)(param_1 + 0x71),2);
  }
  return in_lr;
}

