// sub_08121E0C at 0x08121E0C (thumb)

undefined4 sub_08121E0C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08002624(0x33);
  sub_08002624(0x79);
  DAT_0202f61c = 1;
  *(undefined *)(param_1 + 0xdce) = 0;
  DAT_03002ac0 = 0;
  iVar1 = *(int *)(param_1 + 0xdd4);
  if (iVar1 == -1) {
    sub_08001354();
  }
  else {
    if (iVar1 == 0xfffffff) {
      uVar2 = 0x900;
    }
    else {
      if (iVar1 != 0) {
        sub_08112080(param_1);
        if (DAT_0202ea78 == *(uint *)(param_1 + 0xdd0)) {
          return in_lr;
        }
        if (DAT_0202ea78 != 0xffffffff) {
          sub_08002A98(DAT_0202ea78 & 0xffff);
          DAT_0202ea78 = 0xffffffff;
        }
        sub_08002A88(*(undefined2 *)(param_1 + 0xdd0));
        DAT_0202ea78 = *(undefined4 *)(param_1 + 0xdd0);
        return in_lr;
      }
      DAT_020359bc = &DAT_02036600;
      DAT_020359b8 = &DAT_02036600;
      if (*(char *)(DAT_0202e8e0 + 0x14) == '\0') {
        sub_0801E878(1,&DAT_02035880);
        if ((DAT_0202e8b4 & 1) == 0) {
          if ((DAT_0202e8b4 & 4) == 0) {
            if ((DAT_0202e8b4 & 2) == 0) {
              DAT_0202f605 = 1;
            }
            else {
              DAT_0202f605 = 3;
              *(undefined2 *)(param_1 + 0x625e) = 2;
            }
          }
          else {
            DAT_0202f605 = 0;
            *(undefined2 *)(param_1 + 0x625e) = 3;
          }
        }
        else {
          DAT_0202f605 = 2;
          *(undefined2 *)(param_1 + 0x625e) = 1;
        }
        *(undefined2 *)(param_1 + 0x6260) = 1;
        sub_0801F124(1);
      }
      else {
        *(undefined2 *)(param_1 + 0x6260) = 0x11;
        sub_0801F134(0x11,2);
      }
      uVar2 = 0x300;
    }
    sub_08112080(param_1,uVar2);
  }
  return in_lr;
}

