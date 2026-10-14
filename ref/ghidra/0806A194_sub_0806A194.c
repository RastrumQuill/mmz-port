// sub_0806A194 at 0x0806A194 (thumb)

undefined4 sub_0806A194(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  sub_0806BA20(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    bVar1 = *(byte *)(param_1 + 0xf);
    if (bVar1 < 0xc) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        uVar3 = (&DAT_082b0da0)
                [(uint)*(byte *)(param_1 + 0xf) + (uint)*(byte *)(param_1 + 0xc1) * 0xc];
      }
      else {
        iVar4 = sub_080C8B68(*(byte *)(param_1 + 0xf) + 8,0xc);
        uVar3 = (&DAT_082b0da0)[iVar4 + (uint)*(byte *)(param_1 + 0xc1) * 0xc];
      }
      *(undefined *)(param_1 + 0xd) = uVar3;
      *(undefined *)(param_1 + 0xe) = 1;
      *(byte *)(param_1 + 0xf) = bVar1 + 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

